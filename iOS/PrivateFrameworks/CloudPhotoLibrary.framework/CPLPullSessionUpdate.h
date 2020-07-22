//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLChangeBatch;

@interface CPLPullSessionUpdate
{
    CPLChangeBatch *_clientBatch;
    CPLChangeBatch *_cloudBatch;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) CPLChangeBatch *cloudBatch; // @synthesize cloudBatch=_cloudBatch;
@property(readonly, nonatomic) CPLChangeBatch *clientBatch; // @synthesize clientBatch=_clientBatch;
- (void).cxx_destruct;
- (id)statusDescription;
- (id)storageForStatusInStore:(id)arg1;
- (_Bool)discardFromStore:(id)arg1 error:(id *)arg2;
- (_Bool)applyToStore:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStore:(id)arg1 expandedClientBatch:(id)arg2 expandedCloudBatch:(id)arg3;

@end

