/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBHomeGestureArbiter : NSObject <BSDescriptionProviding, SBHardwareButtonServiceObserver> {
    <BSInvalidatable> * _hardwareButtonObserverAssertion;
    SBHomeGestureParticipant * _hardwareButtonServiceParticipant;
    SBHomeGestureParticipant * _owningParticipant;
    NSMutableArray * _participants;
    <BSInvalidatable> * _stateCaptureHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BSInvalidatable> *hardwareButtonObserverAssertion;
@property (nonatomic, retain) SBHomeGestureParticipant *hardwareButtonServiceParticipant;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHomeGestureParticipant *owningParticipant;
@property (nonatomic, retain) NSMutableArray *participants;
@property (nonatomic, retain) <BSInvalidatable> *stateCaptureHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_registerParticipant:(id)arg1;
- (void)_unregisterParticipant:(id)arg1;
- (void)_updateHardwareButtonServiceParticipant;
- (void)_updateOwningParticipant;
- (void)buttonService:(id)arg1 buttonKind:(long long)arg2 eventsConsumedDidChange:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)hardwareButtonObserverAssertion;
- (id)hardwareButtonServiceParticipant;
- (id)init;
- (id)owningParticipant;
- (id)participantWithIdentifier:(long long)arg1 delegate:(id)arg2;
- (id)participants;
- (void)setHardwareButtonObserverAssertion:(id)arg1;
- (void)setHardwareButtonServiceParticipant:(id)arg1;
- (void)setOwningParticipant:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setStateCaptureHandle:(id)arg1;
- (id)stateCaptureHandle;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
