//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface SYObjectChangeSet : NSObject
{
    NSMutableSet *_added;
    NSMutableSet *_updated;
    NSMutableSet *_deleted;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSMutableSet *deleted; // @synthesize deleted=_deleted;
@property(copy, nonatomic) NSMutableSet *updated; // @synthesize updated=_updated;
@property(copy, nonatomic) NSMutableSet *added; // @synthesize added=_added;
- (void)applyToStore:(id)arg1;
- (id)initWithChangesBetween:(id)arg1 and:(id)arg2;
- (id)init;
- (id)changesBetween:(id)arg1 and:(id)arg2;

@end

