//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSKeyedArchiver.h>

#import <MobileTimer/MTCoder-Protocol.h>

@protocol SYChangeSerializer;

@interface MTSyncArchiver : NSKeyedArchiver <MTCoder>
{
    id <SYChangeSerializer> _serializer;
}

@property(retain, nonatomic) id <SYChangeSerializer> serializer; // @synthesize serializer=_serializer;
- (void).cxx_destruct;
- (_Bool)mt_isWritingToStorage;
- (_Bool)mt_isReadingFromPersistence;
- (_Bool)mt_isWritingToPersistence;

@end

