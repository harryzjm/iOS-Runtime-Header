//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/UIWebViewDelegate-Protocol.h>

@class NSString;

@interface PSSoftwareUpdateReleaseNotesDetail <UIWebViewDelegate>
{
    NSString *_releaseNotes;
}

@property(retain, nonatomic) NSString *releaseNotes; // @synthesize releaseNotes=_releaseNotes;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadView;
- (id)specifiers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

