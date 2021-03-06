//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperationResult.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKServerChangeToken, NSNumber;

@interface CKFetchDatabaseChangesOperationResult : CKOperationResult <NSSecureCoding>
{
    CKServerChangeToken *_serverChangeToken;
    NSNumber *_status;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;

@end

