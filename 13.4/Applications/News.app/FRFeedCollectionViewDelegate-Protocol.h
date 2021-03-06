//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UICollectionViewDelegate-Protocol.h"

@class FRFeedCollectionView, NSArray, NSIndexPath, NSString, UIImage, UIView;

@protocol FRFeedCollectionViewDelegate <UICollectionViewDelegate>

@optional
- (void)collectionViewWillBeRemovedFromWindow:(FRFeedCollectionView *)arg1;
- (UIView *)collectionViewTopDecorationView:(FRFeedCollectionView *)arg1;
- (void)collectionView:(FRFeedCollectionView *)arg1 completeSwipeActionAnimationForCellAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(FRFeedCollectionView *)arg1 tappedSwipeAction:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(FRFeedCollectionView *)arg1 performSwipeAction:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(FRFeedCollectionView *)arg1 willPerformSwipeAction:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
- (UIImage *)collectionView:(FRFeedCollectionView *)arg1 smallIconForSwipeAction:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
- (UIImage *)collectionView:(FRFeedCollectionView *)arg1 iconForSwipeAction:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
- (NSString *)collectionView:(FRFeedCollectionView *)arg1 titleForSwipeAction:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
- (NSArray *)collectionView:(FRFeedCollectionView *)arg1 swipeActionItemsForCellEdge:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)collectionViewDidUpdateSafeAreaInsets:(FRFeedCollectionView *)arg1;
@end

