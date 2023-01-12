//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSExpiring-Protocol.h>

@class NSDate, NSString, NSURL;
@protocol BCSDateHelperProtocol;

__attribute__((visibility("hidden")))
@interface BCSURLPatternMatchResult : NSObject <BCSExpiring>
{
    NSURL *_originalURL;
    NSURL *_extractedURL;
    NSString *_pattern;
    NSString *_bundleID;
    unsigned long long _totalConsecutivePrefixMatches;
    unsigned long long _totalExactMatches;
    unsigned long long _totalAnyMatches;
    id <BCSDateHelperProtocol> _dateHelper;
    NSDate *_expirationDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) id <BCSDateHelperProtocol> dateHelper; // @synthesize dateHelper=_dateHelper;
@property(readonly, nonatomic) unsigned long long totalAnyMatches; // @synthesize totalAnyMatches=_totalAnyMatches;
@property(readonly, nonatomic) unsigned long long totalExactMatches; // @synthesize totalExactMatches=_totalExactMatches;
@property(readonly, nonatomic) unsigned long long totalConsecutivePrefixMatches; // @synthesize totalConsecutivePrefixMatches=_totalConsecutivePrefixMatches;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
@property(readonly, nonatomic) NSURL *extractedURL; // @synthesize extractedURL=_extractedURL;
@property(readonly, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool matchFound;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)initWithOriginalURL:(id)arg1 extractedURL:(id)arg2 totalConsecutivePrefixMatches:(unsigned long long)arg3 totalExactMatches:(unsigned long long)arg4 totalAnyMatches:(unsigned long long)arg5 bundleID:(id)arg6 pattern:(id)arg7 expirationDate:(id)arg8 dateHelper:(id)arg9;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
