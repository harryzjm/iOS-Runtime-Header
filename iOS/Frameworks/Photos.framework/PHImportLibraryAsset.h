//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHImportLibraryAsset
{
    _Bool _isPenultimate;
}

+ (_Bool)isValidAsSidecar:(id)arg1;
- (id)nameKey;
- (_Bool)canDelete;
- (_Bool)canReference;
- (_Bool)isRender;
- (_Bool)isSidecar;
- (_Bool)isBase;
- (_Bool)shouldPreserveUUID;
- (void)configureSidecarTypeForExtension:(id)arg1;
- (id)makeImportIdentifier;
- (id)initWithSource:(id)arg1 url:(id)arg2 type:(id)arg3 supportedMediaType:(unsigned char)arg4 uuid:(id)arg5;

@end
