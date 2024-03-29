//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DVTMemberDocumentLocation
{
    NSString *_member;
}

+ (id)documentLocationWithFileURLSchemeAndPath:(id)arg1 timestamp:(id)arg2 member:(id)arg3;
- (void).cxx_destruct;
@property(readonly) NSString *member; // @synthesize member=_member;
- (id)pasteboardRepresentation;
- (id)description;
- (_Bool)isEqualDisregardingTimestamp:(id)arg1;
- (id)copyWithURL:(id)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)populateLocationParameters:(id)arg1;
- (id)initWithURL:(id)arg1 locationParameters:(id)arg2 error:(id *)arg3;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 member:(id)arg3;

@end

