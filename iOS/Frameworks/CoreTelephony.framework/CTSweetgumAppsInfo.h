//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CTSweetgumAppsInfo : NSObject <NSSecureCoding>
{
    NSArray *_appsList;
    NSString *_appsURL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appsURL; // @synthesize appsURL=_appsURL;
@property(retain, nonatomic) NSArray *appsList; // @synthesize appsList=_appsList;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end
