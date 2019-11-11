/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDeviceApplicationSceneStatusBarStateProvider_Base : NSObject <SBApplicationSceneStatusBarDescribing, SBApplicationSceneStatusBarDescribingInternal, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride> {
    NSMutableArray * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double statusBarAlpha;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } statusBarAvoidanceFrame;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *statusBarControllingSceneHandle;
@property (nonatomic, readonly) bool statusBarHidden;
@property (nonatomic, readonly) long long statusBarOrientation;
@property (nonatomic, readonly) NSString *statusBarSceneIdentifier;
@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, readonly) int statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allObservers;
- (long long)_fallbackInterfaceOrientation;
- (id)_observerRecords;
- (double)_statusBarAlpha;
- (bool)_statusBarAppearsOutsideOfAJailedApp;
- (bool)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (id)_statusBarPartStyles;
- (long long)_statusBarStyle;
- (long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(bool)arg2;
- (bool)_suppressInheritedPartStyles;
- (void)addStatusBarObserver:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumerateObserversWithBlock:(id /* block */)arg1;
- (id)init;
- (void)removeStatusBarObserver:(id)arg1;
- (double)statusBarAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarAvoidanceFrame;
- (id)statusBarControllingSceneHandle;
- (bool)statusBarHidden;
- (long long)statusBarOrientation;
- (id)statusBarPartStyles;
- (id)statusBarSceneIdentifier;
- (long long)statusBarStyle;
- (long long)statusBarStyleForPartWithIdentifier:(id)arg1;
- (int)statusBarStyleOverridesToSuppress;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end