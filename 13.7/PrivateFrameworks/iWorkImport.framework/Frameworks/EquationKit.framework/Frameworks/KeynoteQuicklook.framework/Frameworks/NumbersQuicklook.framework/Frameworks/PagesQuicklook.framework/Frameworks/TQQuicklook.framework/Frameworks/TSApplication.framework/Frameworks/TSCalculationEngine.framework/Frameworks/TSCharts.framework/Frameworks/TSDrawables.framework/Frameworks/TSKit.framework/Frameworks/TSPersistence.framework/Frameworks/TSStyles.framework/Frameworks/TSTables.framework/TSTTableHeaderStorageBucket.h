//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class NSIndexSet, TSUSparseArray;

@interface TSTTableHeaderStorageBucket : TSPObject
{
    TSUSparseArray *_data;
    struct _NSRange _bounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSUSparseArray *data; // @synthesize data=_data;
@property(nonatomic) struct _NSRange bounds; // @synthesize bounds=_bounds;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (void)reset;
- (void)setHeaders:(id)arg1;
- (id)shiftIndexesForwardAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (id)shiftIndexesBackAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)enumerateHeadersWithBlock:(CDUnknownBlockType)arg1;
- (void)setHeader:(id)arg1 atIndex:(unsigned int)arg2;
- (id)mutableHeaderAtIndex:(unsigned int)arg1 allowCreation:(_Bool)arg2;
- (id)headerAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSIndexSet *populatedIndexes;
@property(readonly, nonatomic) unsigned int maxIndex;
@property(readonly, nonatomic) unsigned int minIndex;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithContext:(id)arg1 bounds:(struct _NSRange)arg2;
- (id)initWithContext:(id)arg1;

@end

