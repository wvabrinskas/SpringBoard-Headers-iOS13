/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBMainDisplayWorkspaceAppInteractionEventSource : NSObject <BKSTouchDeliveryObserving, SBApplicationRestrictionObserver, SBLayoutStateTransitionObserver> {
    NSString * _currentFocusedBundleID;
    NSHashTable * _observers;
    SBLayoutStateTransitionCoordinator * _stateCoordinator;
}

@property (nonatomic, copy) NSString *currentFocusedBundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_bundleIDsForIcons:(id)arg1;
- (void)_displayLayoutDidUpdate:(id)arg1;
- (void)_iconVisibilityDidChange:(id)arg1;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_noteTouchForProcess:(int)arg1;
- (void)_notifyTransition:(id)arg1 beginning:(bool)arg2;
- (void)_userQuitApplication:(id)arg1;
- (void)_userRemovedSuggestion:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (id)currentFocusedBundleID;
- (void)dealloc;
- (id)init;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)setCurrentFocusedBundleID:(id)arg1;
- (void)touchDetachedForIdentifier:(unsigned int)arg1 context:(unsigned int)arg2 pid:(int)arg3;
- (void)touchUpOccuredForIdentifier:(unsigned int)arg1 detached:(bool)arg2 context:(unsigned int)arg3 pid:(int)arg4;

@end