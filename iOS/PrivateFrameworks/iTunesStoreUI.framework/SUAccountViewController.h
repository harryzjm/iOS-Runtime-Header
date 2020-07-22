//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, SUMescalSession;

@interface SUAccountViewController
{
    _Bool _failed;
    long long _style;
    SUMescalSession *_mescalSession;
    long long _mescalState;
    NSString *_primingSignature;
    NSURL *_accountURL;
}

+ (id)_latestAccountViewController;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic, getter=_mescalSession) SUMescalSession *_mescalSession; // @synthesize _mescalSession;
- (void).cxx_destruct;
- (_Bool)_shouldUseWebViewFastPath;
- (void)_mescalDidOpenWithSession:(id)arg1 error:(id)arg2;
- (void)_forceOrientationBackToSupportedOrientation;
- (id)_bagKeyForStyle:(long long)arg1;
- (id)_authenticationQueryParametersForStyle:(long long)arg1;
- (void)_closeMescalSession;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldSignRequests;
- (id)newViewControllerForPage:(id)arg1 ofType:(long long)arg2 returningError:(id *)arg3;
- (id)newFetchOperation;
- (void)handleFailureWithError:(id)arg1;
- (void)enqueueFetchOperation;
- (id)copyArchivableContext;
- (id)initWithExternalAccountURL:(id)arg1;
- (id)init;

@end
