//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NEIKEv2EAPPayload
{
    NSData *_eapMessage;
}

+ (id)copyTypeDescription;
- (void).cxx_destruct;
@property(retain) NSData *eapMessage; // @synthesize eapMessage=_eapMessage;
- (_Bool)parsePayloadData;
- (_Bool)generatePayloadData;
- (_Bool)hasRequiredFields;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned long long)type;

@end
