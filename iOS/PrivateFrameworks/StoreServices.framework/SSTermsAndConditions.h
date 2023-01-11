//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSString;

@interface SSTermsAndConditions : NSObject <NSCopying>
{
    _Bool _requiresAuthentication;
    NSString *_text;
    _Bool _userAccepted;
    long long _versionID;
}

@property(nonatomic, getter=isUserAccepted) _Bool userAccepted; // @synthesize userAccepted=_userAccepted;
@property(readonly, nonatomic) _Bool requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(nonatomic) long long currentVersionIdentifier; // @synthesize currentVersionIdentifier=_versionID;
@property(nonatomic) NSString *currentText; // @synthesize currentText=_text;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithResponseData:(id)arg1 error:(id *)arg2;

@end
