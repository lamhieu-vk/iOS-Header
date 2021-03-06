//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTImageCache-Protocol.h>

@class NSString;
@protocol AVTImageCache;

@interface AVTTwoLevelsImageCache : NSObject <AVTImageCache>
{
    id <AVTImageCache> _firstLevelCache;
    id <AVTImageCache> _secondLevelCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <AVTImageCache> secondLevelCache; // @synthesize secondLevelCache=_secondLevelCache;
@property(readonly, nonatomic) id <AVTImageCache> firstLevelCache; // @synthesize firstLevelCache=_firstLevelCache;
- (id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (id)resourceForItem:(id)arg1 scope:(id)arg2;
- (id)imageForItem:(id)arg1 scope:(id)arg2;
- (id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (id)initWithFirstLevelCache:(id)arg1 secondLevelCache:(id)arg2 environment:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

