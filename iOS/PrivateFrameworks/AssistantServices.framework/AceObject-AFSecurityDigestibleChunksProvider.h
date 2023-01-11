//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/AceObject.h>

#import <AssistantServices/AFAnalyticsContextVending-Protocol.h>
#import <AssistantServices/AFSecurityDigestibleChunksProviding-Protocol.h>

@class NSString;

@interface AceObject (AFSecurityDigestibleChunksProvider) <AFSecurityDigestibleChunksProviding, AFAnalyticsContextVending>
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_analyticsContext;
- (_Bool)_af_isKindOfDictationRequest;
- (id)af_speakableText;
- (id)af_text;
- (id)af_dialogIdentifier;
- (_Bool)af_isUserUtterance;
- (_Bool)af_isUtterance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
