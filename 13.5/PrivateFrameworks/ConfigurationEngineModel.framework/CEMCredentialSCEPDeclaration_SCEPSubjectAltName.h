//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMCredentialSCEPDeclaration_SCEPSubjectAltName : CEMPayloadBase
{
    NSString *_payloadRfc822Name;
    NSString *_payloadDNSName;
    NSString *_payloadUniformResourceIdentifier;
    NSString *_payloadNtPrincipalName;
}

+ (id)buildRequiredOnly;
+ (id)buildWithRfc822Name:(id)arg1 withDNSName:(id)arg2 withUniformResourceIdentifier:(id)arg3 withNtPrincipalName:(id)arg4;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadNtPrincipalName; // @synthesize payloadNtPrincipalName=_payloadNtPrincipalName;
@property(copy, nonatomic) NSString *payloadUniformResourceIdentifier; // @synthesize payloadUniformResourceIdentifier=_payloadUniformResourceIdentifier;
@property(copy, nonatomic) NSString *payloadDNSName; // @synthesize payloadDNSName=_payloadDNSName;
@property(copy, nonatomic) NSString *payloadRfc822Name; // @synthesize payloadRfc822Name=_payloadRfc822Name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

