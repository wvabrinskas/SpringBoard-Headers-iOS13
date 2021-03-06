/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBBookmark : NSObject <SBLeafIconDataSource> {
    UIWebClip * _webClip;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSURL *launchURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWebClip *webClip;

+ (id)bookmarkWithWebClip:(id)arg1;

- (void).cxx_destruct;
- (void)_deviceUnlockedForFirstTime:(id)arg1;
- (void)dealloc;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (id)icon:(id)arg1 unmaskedImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)iconCompleteUninstall:(id)arg1;
- (bool)iconSupportsUninstall:(id)arg1;
- (id)identifier;
- (id)initWithWebClip:(id)arg1;
- (bool)isUninstallSupported;
- (id)launchURL;
- (unsigned long long)priorityForIcon:(id)arg1;
- (id)webClip;

@end
