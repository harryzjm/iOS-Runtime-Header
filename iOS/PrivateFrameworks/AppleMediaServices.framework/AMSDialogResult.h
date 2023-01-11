//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class AMSDialogRequest, NSArray, NSMutableDictionary, NSString;

@interface AMSDialogResult : NSObject <NSSecureCoding>
{
    AMSDialogRequest *_originalRequest;
    NSString *_selectedActionIdentifier;
    NSArray *_textfieldValues;
    NSMutableDictionary *_userInfo;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSArray *textfieldValues; // @synthesize textfieldValues=_textfieldValues;
@property(copy, nonatomic) NSString *selectedActionIdentifier; // @synthesize selectedActionIdentifier=_selectedActionIdentifier;
@property(readonly, nonatomic) AMSDialogRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithOriginalRequest:(id)arg1 selectedActionIdentifier:(id)arg2;

@end
