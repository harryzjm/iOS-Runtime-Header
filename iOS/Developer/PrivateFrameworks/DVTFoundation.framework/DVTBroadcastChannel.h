//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@protocol DVTBroadcastName;

@interface DVTBroadcastChannel : NSObject <NSCopying>
{
    id <DVTBroadcastName> _name;
    id _source;
}

@property(readonly) id source; // @synthesize source=_source;
@property(readonly) id <DVTBroadcastName> name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToBroadcastChannel:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSource:(id)arg1 name:(id)arg2;

@end

