//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SetupAssistantSupport/NSSecureCoding-Protocol.h>

@interface SASProximityHandshake : NSObject <NSSecureCoding>
{
    _Bool _hasPasscodeSet;
    int _simplePasscodeType;
    int _unlockType;
    long long _platformType;
}

+ (_Bool)supportsSecureCoding;
@property int unlockType; // @synthesize unlockType=_unlockType;
@property int simplePasscodeType; // @synthesize simplePasscodeType=_simplePasscodeType;
@property _Bool hasPasscodeSet; // @synthesize hasPasscodeSet=_hasPasscodeSet;
@property long long platformType; // @synthesize platformType=_platformType;
- (void)loadInformation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

