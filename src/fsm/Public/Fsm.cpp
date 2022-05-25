#include "Fsm.h"

size_t aquai::Fsm::AddState(FsmState* state){
    assert(state);
    state->state_id = fsmStates.size();
    state->fsm.reset();
    fsmStates.push_back(state);
    return state->state_id;
}

void aquai::Fsm::NextState(FsmState* state){
    assert(state);
    assert(currentState);
    currentState->OnExit();
    currentState = state;
    currentState->OnEnter();
}