//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKAccountOverrideInfo;

@interface CKContainerOptions : NSObject
{
    _Bool _captureResponseHTTPHeaders;
    _Bool _useZoneWidePCS;
    _Bool _wantsSiloedContext;
    _Bool _returnPCSMetadata;
    _Bool _useMMCSEncryptionV2;
    _Bool _bypassPCSEncryption;
    _Bool _enforceNamedOperationGroups;
    CKAccountOverrideInfo *_accountInfoOverride;
}

@property(nonatomic) _Bool enforceNamedOperationGroups; // @synthesize enforceNamedOperationGroups=_enforceNamedOperationGroups;
@property(nonatomic) _Bool bypassPCSEncryption; // @synthesize bypassPCSEncryption=_bypassPCSEncryption;
@property(nonatomic) _Bool useMMCSEncryptionV2; // @synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2;
@property(nonatomic) _Bool returnPCSMetadata; // @synthesize returnPCSMetadata=_returnPCSMetadata;
@property(copy, nonatomic) CKAccountOverrideInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
@property(nonatomic) _Bool wantsSiloedContext; // @synthesize wantsSiloedContext=_wantsSiloedContext;
@property(nonatomic) _Bool useZoneWidePCS; // @synthesize useZoneWidePCS=_useZoneWidePCS;
@property(nonatomic) _Bool captureResponseHTTPHeaders; // @synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders;
- (void).cxx_destruct;

@end

