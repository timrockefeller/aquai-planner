#include "Fsm.h"

size_t aquai::Fsm::AddState(FsmState* state){
    if (!state) return -1;
    state->state_id = fsmStates.size();
    fsmStates.push_back(state);
    return state->state_id;
}