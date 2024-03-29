//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface IXPromisedStreamingZipTransferSeed
{
    unsigned long long _archiveBytesConsumed;
    unsigned long long _archiveSizeBytes;
    NSDictionary *_szOptions;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *szOptions; // @synthesize szOptions=_szOptions;
@property(nonatomic) unsigned long long archiveSizeBytes; // @synthesize archiveSizeBytes=_archiveSizeBytes;
@property(nonatomic) unsigned long long archiveBytesConsumed; // @synthesize archiveBytesConsumed=_archiveBytesConsumed;
- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

