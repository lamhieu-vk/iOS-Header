//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoPass, NSData, NSString;

@interface NPKProtoRemotePassUpdateRequest : PBRequest <NSCopying>
{
    NPKProtoPass *_pass;
    NSString *_passID;
    NSData *_updateRequestData;
    _Bool _cancelUpdate;
    _Bool _requestAuthorization;
    _Bool _shouldNotifyUser;
    struct {
        unsigned int cancelUpdate:1;
        unsigned int requestAuthorization:1;
        unsigned int shouldNotifyUser:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldNotifyUser; // @synthesize shouldNotifyUser=_shouldNotifyUser;
@property(nonatomic) _Bool requestAuthorization; // @synthesize requestAuthorization=_requestAuthorization;
@property(retain, nonatomic) NPKProtoPass *pass; // @synthesize pass=_pass;
@property(nonatomic) _Bool cancelUpdate; // @synthesize cancelUpdate=_cancelUpdate;
@property(retain, nonatomic) NSData *updateRequestData; // @synthesize updateRequestData=_updateRequestData;
@property(retain, nonatomic) NSString *passID; // @synthesize passID=_passID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasShouldNotifyUser;
@property(nonatomic) _Bool hasRequestAuthorization;
@property(readonly, nonatomic) _Bool hasPass;
@property(nonatomic) _Bool hasCancelUpdate;
@property(readonly, nonatomic) _Bool hasUpdateRequestData;

@end

