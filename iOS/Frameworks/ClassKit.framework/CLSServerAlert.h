//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString;

@interface CLSServerAlert
{
    long long _alertType;
    long long _displayRoles;
    long long _displayedCount;
    NSString *_title;
    NSString *_message;
    NSDictionary *_defaultButtonInfo;
    NSArray *_otherButtonInfos;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *otherButtonInfos; // @synthesize otherButtonInfos=_otherButtonInfos;
@property(copy, nonatomic) NSDictionary *defaultButtonInfo; // @synthesize defaultButtonInfo=_defaultButtonInfo;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long displayRoles; // @synthesize displayRoles=_displayRoles;
@property(nonatomic) long long alertType; // @synthesize alertType=_alertType;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) long long displayedCount;
- (id)_init;

@end
