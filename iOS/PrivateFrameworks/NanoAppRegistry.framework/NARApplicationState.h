//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoAppRegistry/NSSecureCoding-Protocol.h>

@interface NARApplicationState : NSObject <NSSecureCoding>
{
    _Bool _restricted;
    _Bool _removedSystemApp;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isRemovedSystemApp) _Bool removedSystemApp; // @synthesize removedSystemApp=_removedSystemApp;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted; // @synthesize restricted=_restricted;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithRestricted:(_Bool)arg1 removedSystemApp:(_Bool)arg2;

@end

