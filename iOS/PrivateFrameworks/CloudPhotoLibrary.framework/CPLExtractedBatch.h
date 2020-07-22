//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLChangeBatch, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface CPLExtractedBatch : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_uploadIdentifiers;
    NSMutableDictionary *_mutableUploadIdentifiers;
    NSSet *_untrustableIdentifiers;
    NSMutableSet *_mutableUntrustableIndentifiers;
    _Bool _full;
    _Bool _batchCanLowerQuota;
    CPLChangeBatch *_batch;
    NSString *_clientCacheIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *clientCacheIdentifier; // @synthesize clientCacheIdentifier=_clientCacheIdentifier;
@property(readonly, nonatomic) _Bool batchCanLowerQuota; // @synthesize batchCanLowerQuota=_batchCanLowerQuota;
@property(nonatomic, getter=isFull) _Bool full; // @synthesize full=_full;
@property(readonly, nonatomic) CPLChangeBatch *batch; // @synthesize batch=_batch;
- (void).cxx_destruct;
- (id)uploadIdentifiers;
- (void)addChange:(id)arg1;
- (id)uploadIdentifierForChange:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
