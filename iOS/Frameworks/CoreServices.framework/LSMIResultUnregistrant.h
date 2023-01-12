//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;
@protocol LSMIResultRegistrantStrategy;

__attribute__((visibility("hidden")))
@interface LSMIResultUnregistrant : NSObject
{
    id <LSMIResultRegistrantStrategy> _strategy;
    NSUUID *_uuid;
    NSString *_bundleID;
    unsigned int _type;
}

- (void).cxx_destruct;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 operationUUID:(id)arg2 bundleIdentifier:(id)arg3 type:(unsigned int)arg4;

@end

