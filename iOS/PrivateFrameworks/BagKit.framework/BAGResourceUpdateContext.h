//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BagKit/NSSecureCoding-Protocol.h>

@class NSError;

@interface BAGResourceUpdateContext : NSObject <NSSecureCoding>
{
    unsigned long long _loadState;
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLoadState:(unsigned long long)arg1 error:(id)arg2;

@end
