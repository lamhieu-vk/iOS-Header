//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TSCacheFlushingManager : NSObject
{
    MISSING_TYPE *cacheFlusher;
    MISSING_TYPE *storageLevelProvider;
    MISSING_TYPE *preFlushGroup;
}

- (void).cxx_destruct;
- (id)init;
- (void)enableFlushing;
- (void)addPreFlushTask:(CDUnknownBlockType)arg1;

@end

