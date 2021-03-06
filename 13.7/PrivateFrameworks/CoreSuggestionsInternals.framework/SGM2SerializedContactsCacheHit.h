//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSString;

@interface SGM2SerializedContactsCacheHit : PBCodable <NSCopying>
{
    NSString *_key;
    _Bool _cacheHit;
    CDStruct_fbc31351 _has;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cacheHit; // @synthesize cacheHit=_cacheHit;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCacheHit;
@property(readonly, nonatomic) _Bool hasKey;

@end

