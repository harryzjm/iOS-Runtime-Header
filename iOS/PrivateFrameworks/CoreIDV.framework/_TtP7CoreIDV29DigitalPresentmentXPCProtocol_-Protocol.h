//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _TtC7CoreIDV25DigitalPresentmentRequest, _TtC7CoreIDV32HintedIdentityDocumentDescriptor;

@protocol _TtP7CoreIDV29DigitalPresentmentXPCProtocol_
- (void)cancelRequestWithCompletion:(void (^)(NSError *))arg1;
- (void)requestDocument:(_TtC7CoreIDV25DigitalPresentmentRequest *)arg1 completion:(void (^)(_TtC7CoreIDV26DigitalPresentmentResponse *, NSError *))arg2;
- (void)canRequestDocumentWithDescriptor:(_TtC7CoreIDV32HintedIdentityDocumentDescriptor *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

