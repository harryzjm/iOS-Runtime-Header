//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

@class NSString, SKSoundSource;

__attribute__((visibility("hidden")))
@interface SKPlaySound : SKAction
{
    NSString *_filePath;
    NSString *_fileName;
    struct SKCPlaySound *_mycaction;
    struct CGPoint _position;
    SKSoundSource *_soundSource;
}

+ (id)_audioURLWithName:(id)arg1 bundle:(id)arg2;
+ (id)playSoundFileNamed:(id)arg1 atPosition:(struct CGPoint)arg2 waitForCompletion:(_Bool)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

