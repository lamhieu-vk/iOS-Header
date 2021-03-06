//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, PKLRUCacheItem;

@interface PKLRUCache : NSObject
{
    PKLRUCacheItem *_firstItem;
    PKLRUCacheItem *_lastItem;
    PKLRUCacheItem *_freeItems;
    NSMapTable *_itemTable;
    unsigned long long _currentCost;
    unsigned long long _totalCostLimit;
    long long _freeItemCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long freeItemCount; // @synthesize freeItemCount=_freeItemCount;
@property(nonatomic) unsigned long long totalCostLimit; // @synthesize totalCostLimit=_totalCostLimit;
@property(readonly, copy, nonatomic) NSArray *allObjects; // @dynamic allObjects;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)_addItem:(id)arg1;
- (void)_removeItem:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

