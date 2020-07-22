//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OpusKit/NSSecureCoding-Protocol.h>
#import <OpusKit/OKActionCustomExports-Protocol.h>

@class NSDictionary, NSString;

@interface OKActionCustom <OKActionCustomExports, NSSecureCoding>
{
    NSString *_name;
    NSDictionary *_attributes;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)customActionWithName:(id)arg1;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
