//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISURLOperation, NSString, NSURL;

@interface IKLoadRecord : NSObject
{
    _Bool _loadCompleted;
    NSURL *_URL;
    ISURLOperation *_opertaion;
    NSString *_scriptStr;
}

@property(retain, nonatomic) NSString *scriptStr; // @synthesize scriptStr=_scriptStr;
@property(nonatomic) _Bool loadCompleted; // @synthesize loadCompleted=_loadCompleted;
@property(retain, nonatomic) ISURLOperation *opertaion; // @synthesize opertaion=_opertaion;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;

@end
