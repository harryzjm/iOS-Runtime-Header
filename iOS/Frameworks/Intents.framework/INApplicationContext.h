//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class NSArray;

@interface INApplicationContext : NSObject <NSSecureCoding>
{
    NSArray *_contexts;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

