#pragma once

#include <memory>

namespace aquai
{
    class Fsm;

    class FsmState
    {
        friend class Fsm;
    public:
        virtual void OnEnter() = 0;
        virtual void OnTick() = 0;
        virtual void OnExit() = 0;

        virtual void OnPause() = 0;
        virtual void OnResume() = 0;

    protected:
        size_t state_id;
        std::weak_ptr<Fsm> fsm;
    };
} // namespace aquai
