//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString, _MRSendCommandResultHandlerDialogProtobuf;

@interface MRSendCommandHandlerDialog : NSObject <NSCopying>
{
    NSMutableArray *_mutableActions;
    NSString *_localizedTitle;
    NSString *_localizedMessage;
}

+ (id)dialogWithTitle:(id)arg1 message:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSArray *actions;
- (void)addAction:(id)arg1;
@property(readonly, copy, nonatomic) _MRSendCommandResultHandlerDialogProtobuf *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;

@end
