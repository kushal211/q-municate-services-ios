//
//  QMImageOperation.h
//  Pods
//
//  Created by Vitaliy Gurkovsky on 3/23/17.
//
//

#import <UIKit/UIKit.h>
#import "QMAsynchronousOperation.h"

@class QBChatAttachment;

typedef void(^QMImageOperationCompletionBlock)(UIImage * _Nullable image, NSError * _Nullable error);

@interface QMImageOperation : QMAsynchronousOperation

@property (nullable, copy, nonatomic) QMImageOperationCompletionBlock imageOperationCompletionBlock;
@property (strong, nonatomic, readonly) QBChatAttachment *attachment;

- (instancetype)initWithAttachment:(QBChatAttachment *)attachment
                 completionHandler:(QMImageOperationCompletionBlock)completionHandler;

@end
