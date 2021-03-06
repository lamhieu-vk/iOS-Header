//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/NSCopying-Protocol.h>

@class NSMutableDictionary, NSMutableSet;

@interface _EDThreadPositionChangeSet : NSObject <NSCopying>
{
    NSMutableDictionary *_objectIDsToAddByBeforeObjectID;
    NSMutableDictionary *_objectIDsToMoveByBeforeObjectID;
    NSMutableSet *_objectIDsToDelete;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *objectIDsToDelete; // @synthesize objectIDsToDelete=_objectIDsToDelete;
@property(retain, nonatomic) NSMutableDictionary *objectIDsToMoveByBeforeObjectID; // @synthesize objectIDsToMoveByBeforeObjectID=_objectIDsToMoveByBeforeObjectID;
@property(retain, nonatomic) NSMutableDictionary *objectIDsToAddByBeforeObjectID; // @synthesize objectIDsToAddByBeforeObjectID=_objectIDsToAddByBeforeObjectID;
- (_Bool)isDeletingObjectID:(id)arg1;
- (_Bool)_isMovingObjectID:(id)arg1;
- (_Bool)isAddingObjectID:(id)arg1;
- (void)addObjectIDToDelete:(id)arg1;
- (_Bool)addObjectIDToMove:(id)arg1 before:(id)arg2;
- (_Bool)addObjectIDToAdd:(id)arg1 before:(id)arg2;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

