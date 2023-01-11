//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMAccessoryDiagnosticsMetadata, NSString, NSURL;

@interface HFAccessoryDiagnosticItem
{
    HMAccessoryDiagnosticsMetadata *_metadata;
    NSString *_filename;
    NSString *_manufacturer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) HMAccessoryDiagnosticsMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSURL *fileURL;
- (_Bool)isEligibleForUpload;
@property(readonly, nonatomic) NSString *path;
- (long long)uploadType;
@property(readonly, nonatomic) long long consentVersion;
@property(readonly, nonatomic) NSURL *privacyPolicyURL;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithLogMetadata:(id)arg1 accessory:(id)arg2;

@end
