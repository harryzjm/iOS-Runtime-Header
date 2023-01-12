//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MRRapportTransportConfiguration : NSObject
{
    NSString *_deviceUID;
    NSString *_sessionUID;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *sessionUID; // @synthesize sessionUID=_sessionUID;
@property(retain, nonatomic) NSString *deviceUID; // @synthesize deviceUID=_deviceUID;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

