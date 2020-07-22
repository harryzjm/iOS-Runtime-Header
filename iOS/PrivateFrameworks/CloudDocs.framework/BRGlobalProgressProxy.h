//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocs/BRProgressProxyDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRGlobalProgressProxy <BRProgressProxyDelegate>
{
    NSString *_kind;
}

- (void).cxx_destruct;
- (id)progressProxy:(id)arg1 localizedDescriptionForProgress:(id)arg2;
- (_Bool)progressProxy:(id)arg1 shouldProxyProgress:(id)arg2;
- (id)initWithGlobalProgressKind:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

