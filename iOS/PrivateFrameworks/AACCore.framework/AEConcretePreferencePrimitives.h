//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AACCore/AEPreferencePrimitives-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AEConcretePreferencePrimitives : NSObject <AEPreferencePrimitives>
{
    NSString *_domain;
}

- (void).cxx_destruct;
- (void)setBool:(id)arg1 forKey:(id)arg2;
- (id)boolForKey:(id)arg1;

@end
