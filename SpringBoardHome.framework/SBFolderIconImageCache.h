/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBFolderIconImageCache : NSObject <SBFolderIconGridCellImageProvider, SBFolderIconObserver, SBFolderObserver, SBHIconImageCacheObserver> {
    NSMapTable * _cachedFolderImages;
    NSMapTable * _cachedMiniGridImages;
    NSMapTable * _folderIconObservers;
    UIImage * _genericMiniGridImage;
    SBHIconImageCache * _iconImageCache;
    <SBIconListLayout> * _listLayout;
    CPMemoryPool * _pool;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHIconImageCache *iconImageCache;
@property (nonatomic, readonly) <SBIconListLayout> *listLayout;
@property (nonatomic, readonly) unsigned long long numberOfCacheHits;
@property (nonatomic, readonly) unsigned long long numberOfCacheMisses;
@property (nonatomic, readonly) unsigned long long numberOfCachedImages;
@property (nonatomic, readonly) CPMemoryPool *pool;
@property (readonly) Class superclass;

+ (bool)drawTreatmentForIcon:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)gridCellImageOfSize:(struct CGSize { double x1; double x2; })arg1 forIcon:(id)arg2 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg3;
+ (id)gridCellImageOfSize:(struct CGSize { double x1; double x2; })arg1 forIconImage:(id)arg2;
+ (id)imageForPageAtIndex:(unsigned long long)arg1 inFolderIcon:(id)arg2 listLayout:(id)arg3 gridCellImageProvider:(id)arg4 pool:(id)arg5;
+ (bool)needsTreatmentForIcon:(id)arg1;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forFolderIcon:(id)arg2;
- (void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)folderIcon:(id)arg1 containedIconAccessoriesDidUpdate:(id)arg2;
- (void)folderIcon:(id)arg1 containedIconImageDidUpdate:(id)arg2;
- (void)folderIcon:(id)arg1 containedIconLaunchEnabledDidChange:(id)arg2;
- (id)genericMiniGridImage;
- (id)gridCellImageForIcon:(id)arg1;
- (id)gridCellImageOfSize:(struct CGSize { double x1; double x2; })arg1 forIcon:(id)arg2 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg3;
- (id)iconImageCache;
- (void)iconImageCache:(id)arg1 didUpdateImageForIcon:(id)arg2;
- (id)imageForPageAtIndex:(unsigned long long)arg1 inFolderIcon:(id)arg2;
- (void)informObserversOfUpdateForFolderIcon:(id)arg1;
- (id)init;
- (id)initWithListLayout:(id)arg1;
- (id)listLayout;
- (unsigned long long)numberOfCacheHits;
- (unsigned long long)numberOfCacheMisses;
- (unsigned long long)numberOfCachedImages;
- (id)pool;
- (void)rebuildImagesForFolderIcon:(id)arg1;
- (void)removeObserver:(id)arg1 forFolderIcon:(id)arg2;
- (void)setIconImageCache:(id)arg1;
- (void)updateCachedImagesForFolderIcon:(id)arg1 afterChangeToContainedImageForIcon:(id)arg2 treatmentsOnly:(bool)arg3;

@end
