//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class MRSendCommandHandlerEvent, NSString, _MRSendCommandResultHandlerDialogActionProtobuf;

@interface MRSendCommandHandlerDialogAction : NSObject <NSCopying>
{
    NSString *_title;
    MRSendCommandHandlerEvent *_event;
    long long _type;
}

+ (id)actionWithTitle:(id)arg1 type:(long long)arg2 commandEvent:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) MRSendCommandHandlerEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) _MRSendCommandResultHandlerDialogActionProtobuf *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithTitle:(id)arg1 type:(long long)arg2 commandEvent:(id)arg3;

@end
