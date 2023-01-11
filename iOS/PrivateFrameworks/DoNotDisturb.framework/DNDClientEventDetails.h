//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDClientEventSource, NSString;

@interface DNDClientEventDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_identifier;
    DNDClientEventSource *_source;
    _Bool _shouldAlwaysInterrupt;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool shouldAlwaysInterrupt; // @synthesize shouldAlwaysInterrupt=_shouldAlwaysInterrupt;
@property(readonly, copy, nonatomic) DNDClientEventSource *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithIdentifier:(id)arg1 source:(id)arg2 shouldAlwaysInterrupt:(_Bool)arg3;
- (id)_initWithDetails:(id)arg1;
- (id)init;

@end
