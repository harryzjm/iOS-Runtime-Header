//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CPLAbstractObject;

@interface CPLPlatformObject : NSObject
{
    id <CPLAbstractObject> _abstractObject;
}

@property(readonly, nonatomic) __weak id <CPLAbstractObject> abstractObject; // @synthesize abstractObject=_abstractObject;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAbstractObject:(id)arg1;
- (id)init;

@end

