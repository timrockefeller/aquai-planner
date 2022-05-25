#pragma once
#include "FsmState.h"
#include <vector>
namespace aquai
{
    class Fsm
    {
    public:
        Fsm();

        size_t AddState(FsmState* state);

        // editor only
        bool RemoveState(FsmState* state);
        // editor only
        bool RemoveState(size_t id);

        void NextState(FsmState* state);

    protected:
        FsmState * currentState;
        std::vector<FsmState *> fsmStates;
    };
} // namespace aquai
